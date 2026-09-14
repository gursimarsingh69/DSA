#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        vector<int> intersection;
        int x1 = rec1[0],x2=rec1[2],x3=rec2[0],x4=rec2[2];
        int y1=rec1[1],y2=rec1[3],y3=rec2[1],y4 = rec2[3];
        int x5=max(x1,x3);
        int y5=max(y1,y3);
        int y6=min(y2,y4);
        int x6=min(x4,x2);
        intersection.insert(intersection.end(),{x5,y5,x6,y6});
        int width = intersection[2]-intersection[0];
        int height = intersection[3]-intersection[1];
        return (width>0) && (height>0);
    }
};