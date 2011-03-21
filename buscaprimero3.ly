% This LilyPond file was generated by Rosegarden 1.5.1
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
    title = "Busca primero"
    tagline = "Coro Juvenil San Juan Bosco"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
    \time 4/4
    \skip 1*38  %% 1-38
}
globalTempo = {
    \tempo 4 = 140  \skip 1*38
}

\score {
    \new StaffGroup <<
        % force offset of colliding notes in chords:
        \override Score.NoteColumn #'force-hshift = #1.0
	\override Score.MetronomeMark #'padding = #8.0

	\include "buscaprimero3-acordes.inc"
	\include "buscaprimero3-soprano.inc"
	\include "buscaprimero3-sopranop.inc"
	\include "buscaprimero3-mezzo.inc"
	\include "buscaprimero3-tenor.inc"

    >> % notes

    \layout { }
} % score

