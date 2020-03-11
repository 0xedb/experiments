'use strict'

let nos = {
  first: 1,
  last: 3
};

let arr = {
  0: "one",
  1: "two",
  2: "three",
  length: 3
};

nos[Symbol.iterator] = function() {
  return {
    current: this.first,
    last: this.last,
    next() {
      // console.log(this)
      if (this.current <= this.last)
        return { value: this.current++, done: false };
      return { done: true };
    }
  };
}; 
 
// need for weakmaps
let john = {
  name: "jon"
};

let mp = new Map().set(john, "john........");
let mpp = new WeakMap().set(john, "john..............");

console.log(mpp.get(john));
john = null;
console.log(mp); 
console.log(mpp);
// console.log(john)
 
let test = {
  one: 1, 
  msg: "hello"
};

Object.defineProperty(test, 'msg', {
  value: 'LAST',
  writable: false, 
}) 

// test.msg = 'something'
console.log(test)
console.log(test.msg)


   