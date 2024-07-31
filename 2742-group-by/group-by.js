/**
 * @param {Function} fn
 * @return {Object}
 */
Array.prototype.groupBy = function(fn) {
    // m[22]++
    // {22:1}
    // {1:[{},{}]}
    let obj={};
    for(let i=0;i<this.length;i++){
        let k=fn(this[i]); 
        if(obj[k])
        obj[k].push(this[i]);   
        else
         obj[k]=[this[i]];
    }
    return obj;
};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */