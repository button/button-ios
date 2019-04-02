var btnsdk=function(e){"use strict";function t(e){const t=c.sanitizedInput(e,p.currentFillId);return!!t&&p.observeFields(window,t)}function n(e){const t=c.sanitizedInput(e,p.currentFillId,!0);return!!t&&(d.fillFields(p.addElementsToFields(t),o,i),!0)}function o(){window.removeEventListener("focusin",p.onFocusInWrapper),window.removeEventListener("focusout",p.onFocusOutWrapper)}function i(){window.addEventListener("focusin",p.onFocusInWrapper),window.addEventListener("focusout",p.onFocusOutWrapper)}function s(e,t){if(!t){const t={ios:"BTNJSAutofillFieldsNotDetected",android:"onAutofillFieldsNotDetected"},n=e;return void c.postMessage(n,t,null,"ios")}const n={url:e.location.href,title:e.document.title},o={fill_id:p.currentFillId,page_info:n,fields:p.removeElementsFromFields(p.currentFields)},i={ios:"BTNJSAutofillFieldsDetected",android:"onAutofillFieldsDetected"},s=e;c.postMessage(s,i,o,"ios")}function r(e){p.startNewSession(e).then(function(t){s(e,t)})}function a(e){p.startNewSession(e).then(function(t){F.startWatching(e.document,function(){p.finishSession(),r(e)}),s(e,t)})}function l(e){switch(u.info("readyState:",e.document.readyState),e.document.readyState){case"loading":e.addEventListener("DOMContentLoaded",function(){l(e)});break;case"interactive":c.getIframes(e.document).length>0?e.addEventListener("load",function(){a(e)}):a(e);break;case"complete":a(e)}}const u={info(...e){}},c={generateUUIDv4(){let e=(new Date).getTime();return"xxxxxxxx-xxxx-4xxx-yxxx-xxxxxxxxxxxx".replace(/[xy]/g,function(t){const n=(e+16*Math.random())%16|0;return e=Math.floor(e/16),("x"===t?n:3&n|8).toString(16)})},postMessage(e,t,n,o){const i=t[o];"ios"===o?e.webkit.messageHandlers[i].postMessage(n):"android"===o&&e[i](JSON.stringify(n))},getIframes(e){return[].slice.call(e.getElementsByTagName("iframe")).filter(function(t){return c.hasSameOrigin(e,t)})},hasSameOrigin(e,t){const n=e.createElement("a");return n.href=t.src,-1===["http:","https:"].indexOf(n.protocol)||e.location.protocol===n.protocol&&e.location.hostname===n.hostname&&e.location.port===n.port},sanitizedInput(e,t,n=!1){if(!e)return null;const o=e.fill_id;if(!o||o!==t)return null;const{fields:fields}=e;if(!fields||0===fields.length)return null;const i=[],s=fields.length;for(let e=0;e<s;e+=1){const t=fields[e];t.param&&"ignore"!==t.param&&(t.param&&t.pop_id&&(!n||t.value)&&t.input_type.match(/^(text|email|tel|select-one)$/)&&i.push({param:t.param,pop_id:t.pop_id,value:t.value}))}return 0===i.length?null:i}},d={getLabelMappings(e){if(!e)return null;const t=e.getElementsByTagName("label"),n=t.length,o={};for(let e=0;e<n;e+=1){const n=t[e].htmlFor;""!==n&&(o[n]=t[e].textContent)}return o},inputElements(e){if(!e)return[];let t=[];"function"==typeof e.matches&&(e.matches("input")||e.matches("select"))&&t.push(e),"function"==typeof e.querySelectorAll&&(t=(t=t.concat([].slice.call(e.querySelectorAll("input")))).concat([].slice.call(e.querySelectorAll("select"))));const n=["text","email","tel"];return t.filter(e=>{if("input"===e.tagName.toLowerCase())return n.includes(e.type);return!0})},fieldsInDocument(e){if(!e)return[];const t=d.inputElements(e),n=t.length;if(0===n)return[];const o=[],i=d.getLabelMappings(e);for(let e=0;e<n;e+=1){const n=t[e],s={element:n,pop_id:c.generateUUIDv4(),id:n.id,name:n.name,placeholder:n.placeholder,tag_name:n.tagName,type:n.type,autocomplete:n.autocomplete,autocompletetype:n.autocompletetype,readonly:n.readonly,disabled:n.disabled};i&&(s.label=i[n.id]),o.push(s)}return o},getFields(e,t){return new Promise(function(n){let o=d.fieldsInDocument(e);const i=c.getIframes(e),s=i.length;for(let e=0;e<s;e+=1)o=o.concat(d.fieldsInDocument(i[e].contentDocument));n({fillId:t,fields:o})})},fillFields(e,t,n){t();const o=e.length;for(let t=0;t<o;t+=1){const{element:element,value:value}=e[t];if(element&&value)if(element.focus(),"input"===element.tagName.toLowerCase())element.value=value;else if("select"===element.tagName.toLowerCase())for(let e of element.options)if(e.value===value||e.value===d.stateMappings()[value]||e.textContent===value||e.textContent===d.stateMappings()[value]||d.stateMappings()[e.value]===value||d.stateMappings()[e.textContent]===value){element.value=e.value;break}}e[0].element.focus(),n()},stateMappings(){return{"Armed Forces":"AA",Alabama:"AL",Alaska:"AK",Arizona:"AZ",Arkansas:"AR",California:"CA",Colorado:"CO",Connecticut:"CT",Delaware:"DE",Florida:"FL",Georgia:"GA",Hawaii:"HI",Idaho:"ID",Illinois:"IL",Indiana:"IN",Iowa:"IA",Kansas:"KS",Kentucky:"KY",Louisiana:"LA",Maine:"ME",Maryland:"MD",Massachusetts:"MA",Michigan:"MI",Minnesota:"MN",Missouri:"MO",Montana:"MT",Nebraska:"NE",Nevada:"NV","New Hampshire":"NH","New Jersey":"NJ","New Mexico":"NM","New York":"NY","North Carolina":"NC",Ohio:"OH",Oklahoma:"OK",Oregon:"OR",Pennsylvania:"PA","Rhode Island":"RI","South Carolina":"SC","South Dakota":"SD",Tennessee:"TN",Texas:"TX",Utah:"UT",Vermont:"VT",Virginia:"VA",Washington:"WA","West Virginia":"WV",Wisconsin:"WI",Wyoming:"WY","American Samoa":"AS","District of Columbia":"DC","Washington DC":"DC","Federated States of Micronesia":"FM",Guam:"GU","Marshall Islands":"MH","Northern Mariana Islands":"MP",Palau:"PW","Puerto Rico":"PR","Virgin Islands":"VI"}}},f={onFocusIn(e,t,n){u.info("focusin: ",e.target);const o=n.find(t=>t.element===e.target);let i={};o?(i.pop_id=o.pop_id,i.param=o.param):i.param="ignore",f._postMessageWithData(t,"in",i)},onFocusOut(e,t,n){u.info("focusout: ",e.target);const o=n.find(t=>t.element===e.target);let i={};o&&(i.pop_id=o.pop_id,i.param=o.param,i.value=e.target.value),f._postMessageWithData(t,"out",i)},_postMessageWithData(e,t,n){const o={fill_id:e,type:t,field:n},i={ios:"BTNJSAutofillFieldFocusEvent",android:"onFieldFocusEvent"},s=window;c.postMessage(s,i,o,"ios")}},p={currentFillId:void 0,currentFields:void 0,submittedFillId:void 0,submittedFields:void 0,startNewSession(e){return new Promise(function(t){p.currentFillId=c.generateUUIDv4(),p.currentFields=[],e.removeEventListener("focusin",p.onFocusInWrapper),e.removeEventListener("focusout",p.onFocusOutWrapper),d.getFields(e.document,p.currentFillId).then(function(e){e&&e.fields&&e.fillId===p.currentFillId&&0!==e.fields.length?(p.currentFields=e.fields,t(!0)):t(!1)})})},removeElementsFromFields(e){const t=[],n=e.length;for(let o=0;o<n;o+=1){const n=Object.assign({},e[o]);delete n.element,t.push(n)}return t},addElementsToFields(e){const t=[],n=e.length;for(let o=0;o<n;o+=1){const n=Object.assign({},e[o]),i=p.currentFields.filter(function(e){return e.pop_id===n.pop_id})[0];i&&(n.element=i.element),t.push(n)}return t},observeFields(e,t){const n=[],o=t.length,i=p.currentFields.length;for(let e=0;e<o;e+=1){const o=t[e];for(let s=0;s<i;s+=1){const i=p.currentFields[s];o.pop_id===i.pop_id?(u.info("found a match for field with param: ",o.param),n.push(Object.assign(o,i))):u.info("no match for field to observe with param: ",t[e].param)}}return p.currentFields=n,0!==n.length&&(e.addEventListener("focusin",p.onFocusInWrapper),e.addEventListener("focusout",p.onFocusOutWrapper),!0)},finishSession(){if(p.currentFillId&&p.currentFields&&0!==p.currentFields.length){p.submittedFillId=p.currentFillId,p.submittedFields=p.currentFields.slice();const e=[],t=p.submittedFields.length;for(let n=0;n<t;n+=1){const t=p.submittedFields[n],{pop_id:pop_id,param:param,inputValue:inputValue}=t;pop_id&&param&&inputValue&&e.push({pop_id:pop_id,param:param,value:inputValue})}const n={fill_id:p.submittedFillId,fields:e};if(n&&n.fields&&0!==n.fields.length){const e={ios:"BTNJSAutofillFormSubmitted",android:"onAutofillFormSubmitted"},t=window;c.postMessage(t,e,n,"ios")}}},onFocusInWrapper(e){f.onFocusIn(e,p.currentFillId,p.currentFields)},onFocusOutWrapper(e){f.onFocusOut(e,p.currentFillId,p.currentFields)}},m=(e,t)=>{function n(){e.call(null,...s),i=null,o=(new Date).getTime()}let o=0;let i=null;let s=null;return function(...r){const a=(new Date).getTime();a-o>t?(e.call(null,...r),o=a):(s=r,i||(i=window.setTimeout(n,t)))}};class h{constructor(e,t=m){this.observer=e,this.throttle=t,this.mutations=[]}startWatching(e,t){const n=this.throttle(this.checkMutations,250),o=this;this.observer.observe(e,function(e){o.mutations=o.mutations.concat(e),n(o,t)})}checkMutations(e,t){const n=e.mutations.some(function(e){return"childList"===e.type&&Array.prototype.slice.call(e.addedNodes).some(function(e){return d.inputElements(e).length>0})});e.mutations=[],n&&t()}}class g{observe(e,t){this.mutationObserver&&this.stop(),this.mutationObserver=new MutationObserver(t),this.mutationObserver.observe(e,{childList:!0,subtree:!0,attributes:!1,characterData:!1})}stop(){this.mutationObserver.disconnect()}}const F=new h(new g);return window.addEventListener("submit",()=>{p.finishSession()}),l(window),e.observeFields=t,e.fillFields=n,e}({});
