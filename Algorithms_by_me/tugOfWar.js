let A = [1,2,3,4,5,6];
let n = A.length;

let total = 0;

for(let i=0;i<n;i++) {
	total += A[i];
}

let res = [];

let ans = [];

let min;

function tugOfWar(A, index, sum, count) {
if(index >= n) return;
  if(count === Math.floor(n/2)) {
  	let req = Math.abs(total - 2*sum)
    if(res.length === 0) {
	// console.log(ans);
      min = req;
      res.push([...ans]);
    } else {
    		// console.log(ans);
      if(req < min) {
        res.pop();
        min = req;
        res.push([...ans]);
      }
    }
    return;
  }
  
  ans.push(A[index]);
  tugOfWar(A, index+1, sum+A[index], count+1);
  ans.pop();
  tugOfWar(A, index+1, sum, count);
}

tugOfWar(A, 0, 0, 0);

let i = 0, j = 0;

let ans2 = [];
while(i < res[0].length && j < A.length) {
	if(res[0][i] !== A[j]) {
		ans2.push(A[j]);
		j++
	} else {
		i++;
		j++;
	}
}

while(j < A.length ) {
	ans2.push(A[j]);
	j++;
}

console.log("set1: ", res);

console.log("set2: ", ans2);
