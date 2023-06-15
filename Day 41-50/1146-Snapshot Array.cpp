class SnapshotArray {
private:
    map <int,map<int,int>> snaps;
    int snapid=0;
public:
    SnapshotArray(int length) {
        for(int i=0;i<length;i++){
            map<int,int> mp;
            mp[0]=0;
            snaps[i]=mp;
        }
    }
    
    void set(int index, int val) {
        snaps[index][snapid]=val;
    }
    
    int snap() {
        return snapid++;
    }
    
    int get(int index, int snapid) {
        auto it = snaps[index].upper_bound(snapid); it--;
        return it->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */