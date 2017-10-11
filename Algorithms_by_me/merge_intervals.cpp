// 2-pointer approach to merge intervals

bool cmp(Interval a,Interval b)
 {
     return a.start<=b.start;
 }
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    int i,j,n=intervals.size();
    int b=newInterval.start;
    int e=newInterval.end;
    intervals.push_back(newInterval);
    sort(intervals.begin(),intervals.end(),cmp);
    i=1,j=0;
    while(i<intervals.size())
    {
        if(intervals[j].end>=intervals[i].start)
        {
            //merge
            intervals[j].end=max(intervals[i].end,intervals[j].end);
        }
        else
        {
            j++;
            intervals[j]=intervals[i];
        }
        i++;
    }
    intervals.erase(intervals.begin()+j+1,intervals.end());
    return intervals;
}
