string timeConversion(string s)
{
    string s_hour = s.substr(0,2);
    int i_hour = stoi(s_hour);
    size_t pos = s.find("PM");
    if(pos != string::npos)
    {
        if(i_hour+12 < 24)
            {
                s_hour = to_string(i_hour+12);
            }
        
    }
    else {
        if(i_hour == 12) s_hour = "00";
    }
    string result = s_hour + s.substr(2,6);
    return result;
}
