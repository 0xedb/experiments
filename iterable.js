let nos = {
  first: 1,
  last: 6
};

let arr = {
  0: 'one',
  1: 'two',
  2: 'three',
  length: 3
}

nos[Symbol.iterator] = function() {
  return {
    current: this.first, 
    last: this.last,
    next()   {
      // console.log(this)
      if (this.current <= this.last)
        return { value: this.current++, done: false };
      return { done: true };
    }
  };
};

for (let a of nos) console.log(a);
console.log(arr[0])
