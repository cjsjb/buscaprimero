% This LilyPond file was generated by Rosegarden 1.5.1
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Busca primero"
	composer = "Karen Lafferty"
	copyright = "Copyright © 1972 Maranatha! Music and Cccm Music"
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
	\time 2/2
}
globalTempo = {
	\tempo 2 = 70
}
\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "buscaprimero3-acordes.inc"
		\include "buscaprimero3-marcas.inc"
		\new StaffGroup <<
			\include "buscaprimero3-soprano.inc"
			\include "buscaprimero3-mezzo.inc"
			\include "buscaprimero3-tenor.inc"
			\include "buscaprimero3-baritono.inc"
		>>
		\new StaffGroup <<
			\include "buscaprimero3-violin.inc"
			\include "buscaprimero3-cello.inc"
		>>
	>>

	\layout { }
}
