\begin{Verbatim}[commandchars=\\\{\}]
\PY{n}{GD}\PY{p}{.}\PY{n}{Begin}\PY{p}{(}\PY{n}{POINTS}\PY{p}{)}\PY{p}{;} 
\PY{n}{GD}\PY{p}{.}\PY{n}{PointSize}\PY{p}{(}\PY{l+m+mi}{12} \PY{o}{*} \PY{l+m+mi}{16}\PY{p}{)}\PY{p}{;}
\PY{k}{for} \PY{p}{(}\PY{k+kt}{int} \PY{n}{i} \PY{o}{=} \PY{l+m+mi}{0}\PY{p}{;} \PY{n}{i} \PY{o}{\PYZlt{}} \PY{l+m+mi}{255}\PY{p}{;} \PY{n}{i} \PY{o}{+}\PY{o}{=} \PY{l+m+mi}{5}\PY{p}{)} \PY{p}{\PYZob{}}
  \PY{n}{GD}\PY{p}{.}\PY{n}{ColorA}\PY{p}{(}\PY{n}{i}\PY{p}{)}\PY{p}{;}
  \PY{n}{GD}\PY{p}{.}\PY{n}{Vertex2ii}\PY{p}{(}\PY{l+m+mi}{2} \PY{o}{*} \PY{n}{i}\PY{p}{,} \PY{l+m+mi}{136} \PY{o}{+} \PY{n}{GD}\PY{p}{.}\PY{n}{rsin}\PY{p}{(}\PY{l+m+mi}{120}\PY{p}{,} \PY{n}{i} \PY{o}{\PYZlt{}}\PY{o}{\PYZlt{}} \PY{l+m+mi}{8}\PY{p}{)}\PY{p}{)}\PY{p}{;}
\PY{p}{\PYZcb{}} 
\end{Verbatim}
