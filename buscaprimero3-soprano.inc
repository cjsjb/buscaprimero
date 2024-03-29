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
		\key c \major

		R2*2  |
		e' 8 ( d' ) e' f'  |
		g' 4 e' 8 d'  |
%% 5
		c' 4 c' 8 d'  |
		e' 2  |
		f' 4 g' 8 f'  |
		e' 4 f' 8 e'  |
		d' 2  |
%% 10
		d' 4 r8 e'  |
		e' 8 d' e' f'  |
		g' 4 e' 8 ( d' )  |
		c' 4 c' 8 d'  |
		e' 4 e'  |
%% 15
		f' 4 g' 8 f'  |
		e' 4 f' 8 e'  |
		d' 4. ( c' 8 )  |
		c' 2  |
		e' 8 ( d' ) e' f'  |
%% 20
		g' 4 e' 8 d'  |
		c' 8 a c' d'  |
		e' 2  |
		f' 4 g' 8 f'  |
		e' 4 f' 8 e'  |
%% 25
		d' 2  |
		d' 4 r8 e'  |
		e' 8 d' e' f'  |
		g' 4 e' 8 ( d' )  |
		c' 4 c' 8 d'  |
%% 30
		e' 4 e'  |
		f' 4 g' 8 f'  |
		e' 4 f' 8 e'  |
		d' 4. c' 8  |
		c' 2  |
		\bar "|."
	}
	\new Lyrics \lyricsto "soprano" {
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
