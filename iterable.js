let nos = {
  first: 1,
  last: 100
}; 

nos[Symbol.iterator] = function() {
  let current = this.first
  
  return {
    next: () => {
      if (this.current <= this.last)
        return { value: this.current++, done: false };
      return { done: true };
    }
  };
};
 
for (let a of nos) console.log(a);
