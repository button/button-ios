/**
 * Adds Button SDK event listeners for JS-based navigation. Wraps methods to update back stack in
 * order to notify the Button SDK then invokes original method.
 *
 * @see BTNWebViewController
 */

(function(history) {
    
    function trackNavigateEvent(url) {
        window.webkit.messageHandlers.ButtonSDK.postMessage(url);
    };
    
    var originalPushState = history.pushState;
    history.pushState = function(obj, title, url) {
        originalPushState.apply(history, arguments);
        trackNavigateEvent(window.location.href);
    };
    
    window.addEventListener('popstate', function(e) {
        trackNavigateEvent(window.location.href);
    });
    
})(window.history);

