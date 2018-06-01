/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    static bool cmp(Interval a,Interval b)
    {
        if(a.start == b.start)
            return a.end < b.end;
        return a.start < b.start;
    }
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        vector<Interval> ans;
        sort(intervals.begin(),intervals.end(),cmp);
        for(int i=0;i<intervals.size();i++)
        {
            
           if (!i || intervals[i].start > ans.back().end) 
               ans.push_back(intervals[i]);
            else if (intervals[i].end <= ans.back().end) 
                continue;
            else 
                ans.back().end = intervals[i].end;
        }
        return ans;
    }
};