//
// Created by ilya1243 on 09.01.24.
//

enum ERRORS {
    BAD_RESULT
};

int BIMBIMBAMBAM(int BIMBIM, int BAMBAM) {
    long long result = static_cast<long long>(BIMBIM) + static_cast<long long>(BAMBAM);
    if (result != BIMBIM + BAMBAM) {
        return ERRORS::BAD_RESULT;
    }
    return result >> 32;
}