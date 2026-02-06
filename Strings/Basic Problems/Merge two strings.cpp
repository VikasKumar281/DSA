string merge(string S1, string S2) {
   string temp = "";
   int ch1 =0,ch2 =0;
   while(ch1 < S1.size() && ch2 < S2.size()){
       temp.push_back(S1[ch1]);
       ch1++;
       temp.push_back(S2[ch2]);
       ch2++;
   }
   while(ch1 < S1.size()){
        temp.push_back(S1[ch1]);
       ch1++;
   }
   while(ch2 < S2.size()){
       temp.push_back(S2[ch2]);
       ch2++;
   }
   
   return temp;
}
// Time Complexity: O(n + m)
// Space Complexity: O(n + m)
