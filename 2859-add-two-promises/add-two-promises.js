/**
 * @param {Promise} promise1
 * @param {Promise} promise2
 * @return {Promise}
 */
var addTwoPromises = async function(promise1, promise2) {

       const value1 = await promise1;
    const value2 = await promise2;
    const x = value1 + value2;
    return new Promise(resolve => resolve(x));

    
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */