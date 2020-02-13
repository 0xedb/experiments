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

console.table(head);

function indorder(head) {
  if (head === null) return;
  // left
  indorder(head.left);

  // parent
  console.log(head.data);

  // right
  indorder(head.right);
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

postorder(head);
console.log("************");
postorderIterative(head);
// indorder(head);
// console.log("************");
// preorder(head);
// console.log("************");
// preorderRecursive(head);
