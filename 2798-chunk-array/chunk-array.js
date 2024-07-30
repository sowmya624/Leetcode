/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    if(arr.length==0 || size<=0)
    return arr;
    else{
        let y=0;
        let b=[];
        while(true){
            let a=[];
           for (let i = y; i < y + size && i < arr.length; i++){
                a.push(arr[i]);
            }
            y=y+size;
            b.push(a);
            if(y>=arr.length){
            break;
            }
        }
        return b;
    }
};
