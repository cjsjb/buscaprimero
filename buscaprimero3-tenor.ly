\include "buscaprimero3-encabezado.inc"

\score {
    <<
        % force offset of colliding notes in chords:
        \override Score.NoteColumn #'force-hshift = #1.0
	\override Score.MetronomeMark #'padding = #8.0

	\include "buscaprimero3-acordes.inc"
	\include "buscaprimero3-tenor.inc"

    >> % notes

    \layout { }
} % score
