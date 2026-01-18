class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int stone:stones){
            pq.push(stone);
        }

        while(!pq.empty()){
            if(pq.size()==1){
                return pq.top();
            }

            int y=pq.top();pq.pop();
            int x=pq.top();pq.pop();
            int smashed=y-x;
            if(smashed>0){
                pq.push(smashed);
            }
        }
        return 0;
    }
};