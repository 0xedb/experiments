class Node {
  constructor(data){
    this.data = data
    this.left = null
    this.right = null
  }
}

head = new Node(4)
head.left = new Node(3)
head.right = new Node(10)
head.right.right = new Node(11)

console.table(head)

function indorder(head) {
  if(head === null) return 
  // left
  indorder(head.left)
  
  // parent
  console.log(head.data)
  
  // right
  indorder(head.right)
}

indorder(head)