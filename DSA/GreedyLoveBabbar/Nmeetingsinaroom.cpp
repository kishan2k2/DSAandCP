 vector<vector<int>> v;
        vector<int> temp;
        
        for (int i = 0; i < n; i++)
        {
            temp.clear();
            temp.push_back(end[i]);
            temp.push_back(start[i]);
            v.push_back(temp);
        }
        
        // Sort meetings based on their end times in ascending order.
        sort(v.begin(), v.end());
        
        int count = 1;  // The first meeting can always be scheduled.
        int endTime = v[0][0];  // Initialize the end time with the end time of the first meeting.
        
        for (int i = 1; i < n; i++)
        {
            if (v[i][1] > endTime)
            {
                count++;        // If the current meeting's start time is greater than the previous meeting's end time, schedule it.
                endTime = v[i][0];  // Update the end time with the end time of the current meeting.
            }
        }
        
        return count;
    }