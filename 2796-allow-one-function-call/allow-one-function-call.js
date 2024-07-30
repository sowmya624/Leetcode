/**
 * @param {Function} fn
 * @return {Function}
 */
var once = function(fn) {
    let x=false;
    return function(...args){
        if(!x){
            re=fn(...args);
            x=true;
            return re;
        }
        
    }
};

/**
 * let fn = (a,b,c) => (a + b + c)
 * let onceFn = once(fn)
 *
 * onceFn(1,2,3); // 6
 * onceFn(2,3,6); // returns undefined without calling fn
 */
