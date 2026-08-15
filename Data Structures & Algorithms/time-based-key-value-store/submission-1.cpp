class TimeMap {
public:
    TimeMap() {
        
    }
    unordered_map<string, map<int, string>> m;
    void set(string key, string value, int timestamp) {
        m[key][timestamp]= value;
    }
    
    string get(string key, int timestamp) {
        auto it = m[key].upper_bound(timestamp);
        if(it==m[key].begin()){
            return "";
            
        }
        else{
            return prev(it)->second;
        }
    }
};
