

/* Inserts an element x at the back of the vector A */
void add_to_vector(vector<int> &A, int x) {
    A.push_back(x);
}

/* Sorts the vector A in ascending order */
void sort_vector_asc(vector<int> &A) {
    sort(A.begin(), A.end());
}

/* Reverses the vector A */
void reverse_vector(vector<int> &A) {
    reverse(A.begin(), A.end());
}

/* Returns the size of the vector A */
int size_of_vector(vector<int> &A) {
    return A.size();
}

/* Sorts the vector A in descending order */
void sort_vector_desc(vector<int> &A) {
    sort(A.begin(), A.end(), greater<int>());
}

/* Prints space separated elements of vector A */
void print_vector(vector<int> &A) {
    for (int num : A) {
        cout << num << " ";
    }
}