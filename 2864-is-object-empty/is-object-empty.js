/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    x=obj.length;
    if(x)
    return false;
    else{
        let r=Object.keys(obj);
        let x=r.length;
        
        if(x)
        return false;
        
    }
    return true;
};