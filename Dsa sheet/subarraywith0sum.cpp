int sum = 0;

        unordered_map<int,int> mp;

        for(int i=0; i<n; i++){

            sum += arr[i];

            if(sum == 0 || mp[sum] || arr[i]==0 ) return true;

            mp[sum]++;

        }

        return false;

    }