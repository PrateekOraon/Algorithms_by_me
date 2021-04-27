class LinkedListNode {
  constructor(value, node) {
    this.value = value;
    this.next = node || null;
  }
}

class Queue {
  constructor() {
    this.first = null;
    this.last = null;
    this.size = 0;
  }

  enqueue(value) {
    let node = new LinkedListNode(value);
    if(this.size === 0) {
      this.first = node;
      this.last = node;
    } else {
      this.last.next = node;
      this.last = node;
    }
    this.size++;
  }

  dequeue() {
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

  print() {
    if(this.first === null) {
      console.log(null);
      return;
    }
    let node = this.first;
    let str = " ";
    while(node !== null) {
      str = str + node.value + " ";
      node = node.next;
    }
    console.log(str)
  }
}

const q = new Queue();
q.enqueue(1)
q.enqueue(5)
q.enqueue(3)
q.dequeue()

q.print();


