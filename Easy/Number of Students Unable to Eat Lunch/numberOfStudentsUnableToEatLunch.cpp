class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches){
        int rechazos = 0;
        int solucion = students.size();
        while(!students.empty() && !sandwiches.empty() && rechazos < students.size()){
            if (students[0] == sandwiches[0]){
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                rechazos = 0;
                solucion--;
            }else{
                students.push_back(students[0]);
                students.erase(students.begin());
                rechazos++;
            }
        }
        return solucion;
    }
};
