/**
 * @param {string} val
 * @return {Object}
 */
//  a=expect(2);
//  {tobe(b)2==b}
//  a.tobe(4)
var expect = function(val) {
     return {
    toBe: function(expectedVal) {
      if (val === expectedVal) {
        return true;
      } else {
        throw new Error("Not Equal");
      }
    },
    notToBe: function(unexpectedVal) {
      if (val !== unexpectedVal) {
        return true;
      } else {
        throw new Error("Equal");
      }
    }
  };
    
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */