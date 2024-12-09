class Solution {
public:

 int solve( vector<int>&freq ){
    int ans =0;
    for (int i=0;i<26;i++){
        // charcter exist ka chek karo
        if (freq[i] != 0){
        ans++;
        freq[i]--;
        int recursionKaAns = solve(freq);
        ans += recursionKaAns;
        //back track
        freq[i]++;

        }
       
    }
    return ans;
 }


    int numTilePossibilities(string tiles) {
        vector<int> freq(26,0);
        //count frequency of characters
        for(auto ch: tiles) {
            freq[ch-'A']++;

        }
        int ans =  solve(freq );
        return ans;
    }
};