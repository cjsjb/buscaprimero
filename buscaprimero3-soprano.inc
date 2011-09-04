\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		R1*2  |
		e' 4 ( d' ) e' f'  |
		g' 2 e' 4 d'  |
%% 5
		c' 2 c' 4 d'  |
		e' 1  |
		f' 2 g' 4 f'  |
		e' 2 f' 4 e'  |
		d' 1  |
%% 10
		d' 2 r4 e'  |
		e' 4 d' e' f'  |
		g' 2 e' 4 ( d' )  |
		c' 2 c' 4 d'  |
		e' 2 e'  |
%% 15
		f' 2 g' 4 f'  |
		e' 2 f' 4 e'  |
		d' 2. ( c' 4 )  |
		c' 1  |
		R1*3  |
		e' 4 ( d' ) e' f'  |
		g' 2 e' 4 d'  |
		c' 4 a c' d'  |
%% 25
		e' 1  |
		f' 2 g' 4 f'  |
		e' 2 f' 4 e'  |
		d' 1  |
		d' 2 r4 e'  |
%% 30
		e' 4 d' e' f'  |
		g' 2 e' 4 ( d' )  |
		c' 2 c' 4 d'  |
		e' 2 e'  |
		f' 2 g' 4 f'  |
%% 35
		e' 2 f' 4 e'  |
		d' 2. c' 4  |
		c' 1  |
		R1  |
		\bar "|."
	}
	\lyricsto "soprano" \new Lyrics \lyricmode {
		"Bus"  __ "ca" "pri" -- "me" -- "ro" "el" "rei" -- "no" "de" "Dios"
		"y" "su" "jus" -- "ti" -- "cia" "di" -- "vi" -- "na,"
		"y" "to" -- "do" "se os" "da" -- "rá" "por" __ "a" -- "ña" -- "di" -- "du" -- "ra,"
		"¡A" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" __ "ya!"
		"¡A" __ "le" -- "lu" -- "ya," "a" -- "le" -- "lu" -- "ya, a" -- "le" -- "lu" -- "ya,"
		"a" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" -- "ya!"
		"Y" "to" -- "do" "se os" "da" -- "rá" "por" __ "a" -- "ña" -- "di" -- "du" -- "ra,"
		"¡A" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" __ "ya!"
	 }
>>
