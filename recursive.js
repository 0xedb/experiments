class Node {
  constructor(data) {
    this.data = data;
    this.left = null;
    this.right = null;
  }
}

head = new Node(4);
head.left = new Node(3);
head.right = new Node(10);
head.right.right = new Node(11);
head.right.left = new Node(9)

console.table(head);

function indorder(head) {
  if (head === null) return;

  indorder(head.left);
  console.log(head.data);
  indorder(head.right);
}

function inorderIterative(head) {
  let stack = new Array();
  stack.push(head);
  if (head.right) stack.push(head.right);
  if (head.left) stack.push(head.left);

  while (stack.length !== 0) {
    let current = stack[stack.length - 1];
    if (!current.left && !current.right) {
      console.log(current.data);
      stack.pop();
    } else {
      let self = stack.pop();
      let next = stack.pop();
      if (current.right) {
        stack.push(current.right);
      }
      if (current.left) {
        stack.push(current.left);
      }

      stack.push(new Node(self.data));

      stack.push(new Node(next.data));
    }
  }
}

function postorder(head) {
  if (head === null) return;
  postorder(head.left);
  postorder(head.right);
  console.log(head.data);
}

function postorderIterative(head) {
  let stack = new Array();
  stack.push(head);

  while (stack.length !== 0) {
    let current = stack[stack.length - 1];
    if (!current.left && !current.right) {
      console.log(current.data);
      current = stack.pop();
    } else {
      if (current.right) {
        stack.push(current.right);
        current.right = null;
      }

      if (current.left) {
        stack.push(current.left);
        current.left = null;
      }
    }
  }
}

function preorder(head) {
  if (head === null) return;
  console.log(head.data);
  preorder(head.left);
  preorder(head.right);
}

function preorderRecursive(head) {
  let stack = new Array();
  stack.push(head);

  while (stack.length !== 0) {
    let removed = stack.pop();
    console.log(removed.data);
    if (removed.right) stack.push(removed.right);
    if (removed.left) stack.push(removed.left);
  }
}

indorder(head);
console.log("************");
inorderIterative(head);
// postorder(head);
// postorderIterative(head);
// indorder(head);
// console.log("************");
// preorder(head);
// console.log("************");
// preorderRecursive(head);
