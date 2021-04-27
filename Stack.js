class LinkedListNode {
  constructor(value, node) {
    this.value = value;
    this.next = node || null;
  }
}

class Stack {
  constructor() {
    this.first = null;
    this.last = null;
    this.size = 0;
  }

  push(value) {
    let node = new LinkedListNode(value);
    if(this.size === 0) {
      this.first = node;
      this.last = node;
    } else {
      node.next = this.first;
      this.first = node;
    }
    this.size++;
  }

  pop() {
    if(this.size === 0) {
      throw new Error('Invalid operation');
    }
    if(this.size === 1) {
      this.last = null;
    }
    let temp = this.first;
    this.first = this.first.next;
    this.size--;
    return temp.value;
  }
}

const s = new Stack();
s.push(5)
s.pop()
s.push(6)
s.push(11)
s.push(34)
s.push(78)
console.log(s);
