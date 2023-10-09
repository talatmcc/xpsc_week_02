int longestSubstrDistinctChars (string s)
{
    int n = s.length();
    int i = 0, j = 0;
    int fr[26] = {0};
    int unq = 0;
    vector <int> v;
    while (j < n)
    {
        fr[s[j] - 'a']++;
        if (fr[s[j] - 'a'] == 1)
        {
            unq++;
        }
        v.push_back(unq);
        while( fr[s[j] - 'a'] > 1){
            
            fr[s[i] - 'a']--;
            if (fr[s[i] - 'a'] == 0)
            {
                unq--;
            }
            i++;
        }
        j++;
    }
    int ans  = INT_MIN;
    for( int it : v){
        if(it>ans){
            ans = it;
        }
    }
    return ans;
}