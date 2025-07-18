for (int j = 0; j < 26; j++)
    {
        if (max < alpha[j])
        {
            max = alpha[j];
        }
    }
    cout << max;
    cout << "These element repeats maximum times \n";
    for (int k = 0; k < 26; k++)
    {
        if (alpha[k] == max)
            cout << alpha[k + 97] << " : " << max << endl;
    }