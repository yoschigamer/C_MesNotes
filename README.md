\begin{table}[]
\begin{tabular}{ll}
\hline
\multicolumn{1}{|c|}{} & \multicolumn{1}{c|}{} \\ \hline
                       &                      
\end{tabular}
\caption{int ft_fibonacci(int index)
{
    int nb = 0;
    int nb2 = 0;
    int nb3 = 1;
    int i;
    i = 0;
    if (index < 0)
        return -1;
    if (index == 0)
        return 0;
    if (index == 1)
        return 1;
    while (i < index)
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
    return 0;
}
}
\label{tab:my-table}
\end{table}
