var btnsdk=function(e){"use strict";function t(e){const t=c.sanitizedInput(e,p.currentFillId);if(!t)return!1;const n=p.observeFields(window,t);return n&&p.notifyActiveElement(window),n}function n(e){const t=c.sanitizedInput(e,p.currentFillId,!0);return!!t&&(d.fillFields(p.addElementsToFields(t),i,o),!0)}function i(){window.removeEventListener("focusin",p.onFocusInWrapper),window.removeEventListener("focusout",p.onFocusOutWrapper)}function o(){window.addEventListener("focusin",p.onFocusInWrapper),window.addEventListener("focusout",p.onFocusOutWrapper)}function s(e,t){if(!t){const t={ios:"BTNJSAutofillFieldsNotDetected",android:"onAutofillFieldsNotDetected"},n=e;return void c.postMessage(n,t,null,"ios")}const n={url:e.location.href,title:e.document.title},i={fill_id:p.currentFillId,page_info:n,fields:p.removeElementsFromFields(p.currentFields)},o={ios:"BTNJSAutofillFieldsDetected",android:"onAutofillFieldsDetected"},s=e;c.postMessage(s,o,i,"ios")}function r(e){p.startNewSession(e).then(function(t){s(e,t)})}function a(e){p.startNewSession(e).then(function(t){F.startWatching(e.document,function(){p.finishSession(),r(e)}),s(e,t)})}function l(e){switch(u.info("readyState:",e.document.readyState),e.document.readyState){case"loading":e.addEventListener("DOMContentLoaded",function(){l(e)});break;case"interactive":c.getIframes(e.document).length>0?e.addEventListener("load",function(){a(e)}):a(e);break;case"complete":a(e)}}const u={info(...e){}},c={generateUUIDv4(){let e=(new Date).getTime();return"xxxxxxxx-xxxx-4xxx-yxxx-xxxxxxxxxxxx".replace(/[xy]/g,function(t){const n=(e+16*Math.random())%16|0;return e=Math.floor(e/16),("x"===t?n:3&n|8).toString(16)})},postMessage(e,t,n,i){const o=t[i];"ios"===i?e.webkit.messageHandlers[o].postMessage(n):"android"===i&&e[o](JSON.stringify(n))},getIframes(e){return[].slice.call(e.getElementsByTagName("iframe")).filter(function(t){return c.hasSameOrigin(e,t)})},hasSameOrigin(e,t){const n=e.createElement("a");return n.href=t.src,-1===["http:","https:"].indexOf(n.protocol)||e.location.protocol===n.protocol&&e.location.hostname===n.hostname&&e.location.port===n.port},sanitizedInput(e,t,n=!1){if(!e)return null;const i=e.fill_id;if(!i||i!==t)return null;const{fields:fields}=e;if(!fields||0===fields.length)return null;const o=[],s=fields.length;for(let e=0;e<s;e+=1){const t=fields[e];t.param&&"ignore"!==t.param&&(t.param&&t.pop_id&&(!n||t.value)&&t.input_type.match(/^(text|email|tel|select-one)$/)&&o.push({param:t.param,pop_id:t.pop_id,value:t.value}))}return 0===o.length?null:o}},d={getLabelMappings(e){if(!e)return null;const t=e.getElementsByTagName("label"),n=t.length,i={};for(let e=0;e<n;e+=1){const n=t[e].htmlFor;""!==n&&(i[n]=t[e].textContent)}return i},inputElements(e){if(!e)return[];let t=[];"function"==typeof e.matches&&(e.matches("input")||e.matches("select"))&&t.push(e),"function"==typeof e.querySelectorAll&&(t=(t=t.concat([].slice.call(e.querySelectorAll("input")))).concat([].slice.call(e.querySelectorAll("select"))));const n=["text","email","tel"];return t.filter(e=>{if("input"===e.tagName.toLowerCase())return n.includes(e.type);return!0})},fieldsInDocument(e){if(!e)return[];const t=d.inputElements(e),n=t.length;if(0===n)return[];const i=[],o=d.getLabelMappings(e);for(let e=0;e<n;e+=1){const n=t[e],s={element:n,pop_id:c.generateUUIDv4(),id:n.id,name:n.name,placeholder:n.placeholder,tag_name:n.tagName,type:n.type,autocomplete:n.autocomplete,autocompletetype:n.autocompletetype,readonly:n.readonly,disabled:n.disabled};o&&(s.label=o[n.id]),i.push(s)}return i},getFields(e,t){return new Promise(function(n){let i=d.fieldsInDocument(e);const o=c.getIframes(e),s=o.length;for(let e=0;e<s;e+=1)i=i.concat(d.fieldsInDocument(o[e].contentDocument));n({fillId:t,fields:i})})},fillFields(e,t,n){t();const i=e.length;for(let t=0;t<i;t+=1){const{element:element,value:value}=e[t];element&&value&&(element.dispatchEvent(new Event("focus")),d._fillSingleField(element,value),element.dispatchEvent(new Event("change")),element.dispatchEvent(new Event("blur")))}n()},_fillSingleField(e,t){"input"===e.tagName.toLowerCase()?d._fillInputField(e,t):"select"===e.tagName.toLowerCase()&&d._fillSelectField(e,t)},_fillInputField(e,t){e.value=t},_fillSelectField(e,t){for(let n of e.options)if(n.value===t||n.value===d.stateMappings()[t]||n.textContent===t||n.textContent===d.stateMappings()[t]||d.stateMappings()[n.value]===t||d.stateMappings()[n.textContent]===t){e.value=n.value;break}},stateMappings(){return{"Armed Forces":"AA",Alabama:"AL",Alaska:"AK",Arizona:"AZ",Arkansas:"AR",California:"CA",Colorado:"CO",Connecticut:"CT",Delaware:"DE",Florida:"FL",Georgia:"GA",Hawaii:"HI",Idaho:"ID",Illinois:"IL",Indiana:"IN",Iowa:"IA",Kansas:"KS",Kentucky:"KY",Louisiana:"LA",Maine:"ME",Maryland:"MD",Massachusetts:"MA",Michigan:"MI",Minnesota:"MN",Missouri:"MO",Montana:"MT",Nebraska:"NE",Nevada:"NV","New Hampshire":"NH","New Jersey":"NJ","New Mexico":"NM","New York":"NY","North Carolina":"NC",Ohio:"OH",Oklahoma:"OK",Oregon:"OR",Pennsylvania:"PA","Rhode Island":"RI","South Carolina":"SC","South Dakota":"SD",Tennessee:"TN",Texas:"TX",Utah:"UT",Vermont:"VT",Virginia:"VA",Washington:"WA","West Virginia":"WV",Wisconsin:"WI",Wyoming:"WY","American Samoa":"AS","District of Columbia":"DC","Washington DC":"DC","Federated States of Micronesia":"FM",Guam:"GU","Marshall Islands":"MH","Northern Mariana Islands":"MP",Palau:"PW","Puerto Rico":"PR","Virgin Islands":"VI"}}},f={onFocusIn(e,t,n){const i=n.find(t=>t.element===e);let o={};i?(o.pop_id=i.pop_id,o.param=i.param):o.param="ignore",f._postMessageWithData(t,"in",o)},onFocusOut(e,t,n){const i=n.find(t=>t.element===e);let o={};i&&(o.pop_id=i.pop_id,o.param=i.param,o.value=e.value),f._postMessageWithData(t,"out",o)},_postMessageWithData(e,t,n){const i={fill_id:e,type:t,field:n},o={ios:"BTNJSAutofillFieldFocusEvent",android:"onFieldFocusEvent"},s=window;c.postMessage(s,o,i,"ios")}},p={currentFillId:void 0,currentFields:void 0,submittedFillId:void 0,submittedFields:void 0,startNewSession(e){return new Promise(function(t){p.currentFillId=c.generateUUIDv4(),p.currentFields=[],e.removeEventListener("focusin",p.onFocusInWrapper),e.removeEventListener("focusout",p.onFocusOutWrapper),d.getFields(e.document,p.currentFillId).then(function(e){e&&e.fields&&e.fillId===p.currentFillId&&0!==e.fields.length?(p.currentFields=e.fields,t(!0)):t(!1)})})},removeElementsFromFields(e){const t=[],n=e.length;for(let i=0;i<n;i+=1){const n=Object.assign({},e[i]);delete n.element,t.push(n)}return t},addElementsToFields(e){const t=[],n=e.length;for(let i=0;i<n;i+=1){const n=Object.assign({},e[i]),o=p.currentFields.filter(function(e){return e.pop_id===n.pop_id})[0];o&&(n.element=o.element),t.push(n)}return t},observeFields(e,t){const n=[],i=t.length,o=p.currentFields.length;for(let e=0;e<i;e+=1){const i=t[e];for(let s=0;s<o;s+=1){const o=p.currentFields[s];i.pop_id===o.pop_id?(u.info("found a match for field with param: ",i.param),n.push(Object.assign(i,o))):u.info("no match for field to observe with param: ",t[e].param)}}return p.currentFields=n,0!==n.length&&(e.addEventListener("focusin",p.onFocusInWrapper),e.addEventListener("focusout",p.onFocusOutWrapper),!0)},notifyActiveElement(e){const t=e.document.activeElement;t&&f.onFocusIn(t,p.currentFillId,p.currentFields)},finishSession(){if(p.currentFillId&&p.currentFields&&0!==p.currentFields.length){p.submittedFillId=p.currentFillId,p.submittedFields=p.currentFields.slice();const e=[],t=p.submittedFields.length;for(let n=0;n<t;n+=1){const t=p.submittedFields[n],{pop_id:pop_id,param:param,inputValue:inputValue}=t;pop_id&&param&&inputValue&&e.push({pop_id:pop_id,param:param,value:inputValue})}const n={fill_id:p.submittedFillId,fields:e};if(n&&n.fields&&0!==n.fields.length){const e={ios:"BTNJSAutofillFormSubmitted",android:"onAutofillFormSubmitted"},t=window;c.postMessage(t,e,n,"ios")}}},onFocusInWrapper(e){f.onFocusIn(e.target,p.currentFillId,p.currentFields)},onFocusOutWrapper(e){f.onFocusOut(e.target,p.currentFillId,p.currentFields)}},m=(e,t)=>{function n(){e.call(null,...s),o=null,i=(new Date).getTime()}let i=0;let o=null;let s=null;return function(...r){const a=(new Date).getTime();a-i>t?(e.call(null,...r),i=a):(s=r,o||(o=window.setTimeout(n,t)))}};class h{constructor(e,t=m){this.observer=e,this.throttle=t,this.mutations=[]}startWatching(e,t){const n=this.throttle(this.checkMutations,250),i=this;this.observer.observe(e,function(e){i.mutations=i.mutations.concat(e),n(i,t)})}checkMutations(e,t){const n=e.mutations.some(function(e){return"childList"===e.type&&Array.prototype.slice.call(e.addedNodes).some(function(e){return d.inputElements(e).length>0})});e.mutations=[],n&&t()}}class g{observe(e,t){this.mutationObserver&&this.stop(),this.mutationObserver=new MutationObserver(t),this.mutationObserver.observe(e,{childList:!0,subtree:!0,attributes:!1,characterData:!1})}stop(){this.mutationObserver.disconnect()}}const F=new h(new g);return window.addEventListener("submit",()=>{p.finishSession()}),l(window),e.observeFields=t,e.fillFields=n,e}({});
