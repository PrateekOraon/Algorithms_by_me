let n = 5;

let visited = new Array(n);

for(let i=0;i<n;i++) {
	visited[i] = new Array(n);
	for(let j=0;j<n;j++) {
		visited[i][j] = -1;
	}
}

let flag = 0;

function knightTour(i, j, count, ans) {
	if(flag) return;
	if(count === n*n) {
		flag = 1;
		console.log(visited);
		return;
	}
	if(i < 0 || i >= n || j<0 || j>=n || visited[i][j] !== -1) return;
	
	visited[i][j] = count;
	let temp = ans ? ans+" "+count : count.toString();
	knightTour(i-2, j+1, count+1, temp);
	knightTour(i-1, j+2, count+1, temp);
	knightTour(i+1, j+2, count+1, temp);
	knightTour(i+2, j+1, count+1, temp);
	knightTour(i+2, j-1, count+1, temp);
	knightTour(i+1, j-2, count+1, temp);
	knightTour(i-1, j-2, count+1, temp);
	knightTour(i-2, j-1, count+1, temp);
	visited[i][j] = -1;
}

knightTour(0, 0, 0, "");
