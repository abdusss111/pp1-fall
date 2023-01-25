int summa(int a, int b){
    int sum = a+b;
    return sum; 
}
int equals(int n, int a[], int b[]) {
    int x[101];
    int y[101]; 
    int sum = 0;
    for ( int i = 1; i <= 100; ++ i ) {
        x[i] = 0;
        y[i] = 0;
    }
    for ( int i = 1; i <= n; ++ i ){
        x[a[i]] ++;
    }
    for ( int i = 1; i <= n; ++ i ){
        y[b[i]] ++;
    }
    for ( int i = 1; i <= 100; ++ i ){
        sum += min (x[i], y[i]);
    }
    return sum;
}

bool findElement(int a[n][m]) { // bolean function
    for (int i = 0; i < n; ++ i) {
        if (a[i] == x)
            return true;
    }
    return false;
}

void pifagor( int a, int b ){
    cout << sqrt(a*a+b*b);
}

string podryaddigit( string s, int n ){
    int cnt = 0;
    for ( size_t i=0; i<s.size(); i++ ){
        if ( isdigit(s[i]) ) cnt++;
    }
    if ( cnt>=n ) return "YES";
    return "NO";
}

void removevowel( string s ){
    for(int i=0;i<s.size();i++){
        if(s[i]!='a' and s[i]!='e' and s[i]!='o' and s[i]!='i' and s[i]!='u' and s[i]!='A' and s[i]!='E' and s[i]!='O' and s[i]!='I' and s[i]!='U' ) cout << s[i];
}

void chetnye( string s ){
    int cnt=0;
    for ( int i=0; i<s.size(); i++ ){
        s[i]=int( s[i]-48 );
        if ( s[i]%2==0 ) cnt++;
    }
    if ( cnt == s.size() ) cout << "Valid";
    else cout << "Not valid";
}

void touppereven( string s ){
    for ( size_t i=0; i<s.size(); i++ ){
        if ( i%2==0 and islower(s[i])) s[i]=char(int(s[i]-32));
    }
    cout << s;
}

long long max2( long long a, long long b){
    long long mx=a;
    if ( mx>b ) return mx;
    return b;
}

void sumofdigits( int n ){
    int sum=0;
    while (n > 0){
        sum+=n%10;
        n/=10;
    }
    cout << sum;
}

string funcstrdig( string str, int num ){
    int counter=0;
    for ( int i=0; i<str.size(); i++ ){
        if ( isdigit(str[i]) ) counter++;
        else if ( num<=counter ) return "Valid";
        else counter=0;
    }
    return "Not valid";
}

void rvrs( int a[], int n ){
    for ( int i=0; i<n; i++ ){
        cin >> a[i];
    }
    for ( int i=0; i<n; i++ ){
        cout << a[n-1-i] << " ";
    }
}

void transponirovanie(){
    cin >> n >> m;
    int a[n][m];
    for ( int i=0; i<n; i++ ){
        for ( int j=0; j<m; j++ ){
            cin >> a[i][j];
        }
    }
    for ( int j=0; j<m; j++ ){
        for ( int i=0; i<n; i++ ){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void luckyticket( int n ){
    int sum=0;
    int m=n;
    while (n > 0){
        sum+=n%10;
        n/=10;
    }
    m%=10;
    if ( sum%m==0 ) cout << "YES";
    else cout << "NO";
}

long long modulo( long long n ){
    long long zero=0; 
    long long modn;
    if ( n>0 ) return n;
    zero = n;
    modn = (n-(zero*2));
    return modn;
}

void percent( int p, int g ){
    double res = g*100;
    cout << setprecision(6);
    cout << res/p;
}

char toupper( char n ){
    if ( char(65)<=n and char(95)>=n ) return n;
    char N=char(n-32);
    return N;
}
RECURSION
int sumof(string s){
    if ( i==s.size() ) return sum;
    sum+=int(s[i]-48);
    i++;
    return sumof(s);
}

int degreeof2(){
    if ( n==0 ) return x;
    x*=2;
    n-=1;
    return degreeof2();
}

string tobin(string str){
    if (n == 0){
        reverse(str.begin(),str.end());
        return str;
    }
    str+=char((n % 2) + 48 );
    n/=2;
    return tobin(str);
}

string binsearch(int * a){
    if ( a[n]==x) return "Yes";
    if ( n==0 ) return "No"; 
    n=n-1;
    return binsearch(a);
    
}

bool binarySearch(int* a, int l, int r, int x) {
    if(l > r) return false;
    int m = l + (r - l) / 2;
    if(a[m] == x) return true;
    else if(a[m] > x) return binarySearch(a, l, m - 1, x);
    else return binarySearch(a, m + 1, r, x); 
    
}

