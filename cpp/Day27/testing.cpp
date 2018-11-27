class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        // complete this function
        return vector<int>{};
    }

};

class TestDataUniqueValues {
public:
    static vector<int> get_array() {
        // complete this function
        return vector<int>{5,4,3,2,1};
    }

    static int get_expected_result() {
        // complete this function
        return 4;
    }

};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        // complete this function
        return vector<int>{5,4,3,1,2,1};
    }

    static int get_expected_result() {
        // complete this 
        return 3;
    }

};
