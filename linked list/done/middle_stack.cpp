

int main(){
    stack st;
    string f="hem";
    for(int i=0;i<=f.length();i++){
        st.push(f[i]);
    }
    for(int i=0;i<=f.length();i++){
        st.Top();
        st.pop();
    }
}