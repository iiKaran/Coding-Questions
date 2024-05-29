class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        // Create events: start and end points of tap coverage

        vector<pair<int, int>> events;
        for (int i = 0; i < ranges.size(); ++i)
            events.push_back({max(0, i - ranges[i]), min(n, i + ranges[i])});
        
        sort(events.begin(), events.end()); // Sort events based on start points
        
        int taps = 0, currEnd = 0, maxEnd = 0;
        for (int i = 0; i < events.size(); ) {

            // If there's a gap in coverage, add a new tap at the current ending point

            if (events[i].first > currEnd) {
                if (events[i].first > maxEnd) return -1; // Gap is not covered, return -1

                taps++; // Place a tap at the current ending point

                currEnd = maxEnd; // Update the current ending point
            } else {

                maxEnd = max(maxEnd, events[i].second); // Update the maximum ending point

                i++; // Move to the next event
                
                if (maxEnd >= n) return taps + 1; // If we can cover the entire range, return taps + 1
            }
        }
        return currEnd >= n ? taps : -1; // If the final ending point is at or beyond n, return taps
    }
};