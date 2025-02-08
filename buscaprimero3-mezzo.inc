\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key c \major

		R1*2  |
		e' 4 ( d' ) e' f'  |
		d' 2 d' 4 d'  |
%% 5
		c' 2 c' 4 d'  |
		b 1  |
		c' 2 e' 4 d'  |
		c' 2 c' 4 a  |
		b 1  |
%% 10
		b 2 r4 e'  |
		e' 4 e' e' e'  |
		d' 2 d' 4 ~ d'  |
		c' 2 c' 4 d'  |
		b 2 b  |
%% 15
		c' 2 c' 4 c'  |
		e' 2 c' 4 c'  |
		d' 2. ( e' 4 )  |
		e' 1  |
		e' 4 ( d' ) e' f'  |
%% 20
		d' 2 d' 4 d'  |
		c' 4 c' c' d'  |
		b 1  |
		c' 2 e' 4 d'  |
		c' 2 c' 4 a  |
%% 25
		b 1  |
		b 2 r4 e'  |
		e' 4 e' e' e'  |
		d' 2 d' 4 ~ d'  |
		c' 2 c' 4 d'  |
%% 30
		b 2 b  |
		c' 2 c' 4 c'  |
		e' 2 c' 4 c'  |
		d' 2. ( e' 4 )  |
		e' 1  |
	}
	\new Lyrics \lyricsto "mezzo" {
		"Bus" __ "ca" "pri" -- "me" -- "ro" "el" "rei" -- "no" "de" "Dios"
		"y" "su" "jus" -- "ti" -- "cia" "di" -- "vi" -- "na,"
		"y" "to" -- "do" "se os" "da" -- "rá" "por" __ "a" -- "ña" -- "di" -- "du" -- "ra,"
		"¡A" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" __ "ya!"

		"¡A" __ "le" -- "lu" -- "ya," "a" -- "le" -- "lu" -- "ya, a" -- "le" -- "lu" -- "ya,"
		"a" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" -- "ya!"
		"Y" "to" -- "do" "se os" "da" -- "rá" "por" "a" -- "ña" -- "di" -- "du" -- "ra,"
		"¡A" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" __ "ya!"
	 }
>>
