//Problem Link:- https://www.codingninjas.com/codestudio/contests/codestudio-weekend-contest-9/problems/17040?leftPanelTab=2
//Lvl:- Medium
//Time Complexity:- O(N)
int maximumBosses(int n, int p, vector<int> power)
{
    int ans = 0, r = -1, cur = 0;

    for (int l = 0; l < n; ++l)
    {
        // Extend 'R', as long as [L,R] valid.
        while (r < n - 1 && cur + power[r + 1] < p)
            cur += power[r + 1], r++;

        // Try to maximize answer using 'R'-'L'+1.
        ans = max(ans, r - l + 1);

        // Reduce cur.
        cur -= power[l];
    }

    // Return answer.
    return ans;
}
