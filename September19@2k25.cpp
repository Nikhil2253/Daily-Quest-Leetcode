class Spreadsheet {
private:
    unordered_map<string,int> cellValues;
    int numRows;  
     int getTokenValue(const string &token) {
        if (token.empty()) return 0;
        if (isdigit(token[0])) {
            return stoi(token);
        } else {
            auto it = cellValues.find(token);
            if (it != cellValues.end()) return it->second;
            else return 0;
        }
    }

public:
    Spreadsheet(int rows) {
        numRows = rows;
    }

    void setCell(const string &cell, int value) {
         cellValues[cell] = value;
    }

    void resetCell(const string &cell) {
        cellValues.erase(cell);
    }

    int getValue(const string &formula) {
        string expr = formula.substr(1);
        auto plusPos = expr.find('+');
        string left = expr.substr(0, plusPos);
        string right = expr.substr(plusPos + 1);
        int valLeft = getTokenValue(left);
        int valRight = getTokenValue(right);
        return valLeft + valRight;
    }
};
