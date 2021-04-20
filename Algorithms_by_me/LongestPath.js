var A = [
        [ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 ],
        [ 1, 1, 0, 1, 1, 0, 1, 1, 0, 1 ],
        [ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 ]
    ];
    
let m = A.length, n = A[0].length;

var visited = new Array(m);

for(let i=0;i<m;i++) {
	visited[i] = new Array(n);
	for(let j=0;j<n;j++) {
		visited[i][j] = 0;
	}
}


let max = [];

function longestRoute(A, i, j, steps) {
	if(i === m-1 && j === n-1) {
		max = Math.max(max, steps);
		return
	}
	if(i<0 || i>=m || j<0 || j>=n || visited[i][j] === 1 || A[i][j] === 0) return;
	
	visited[i][j] = 1;
	longestRoute(A, i, j+1, steps+1);
	longestRoute(A, i+1, j, steps+1);
	longestRoute(A, i, j-1, steps+1);
	longestRoute(A, i-1, j, steps+1);
	visited[i][j] = 0;
}

longestRoute(A, 0, 0, 0);
console.log(max);
