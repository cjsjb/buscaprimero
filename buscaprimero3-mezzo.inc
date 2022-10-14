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

		R2*2  |
		e' 8 ( d' ) e' f'  |
		d' 4 d' 8 d'  |
%% 5
		c' 4 c' 8 d'  |
		b 2  |
		c' 4 e' 8 d'  |
		c' 4 c' 8 a  |
		b 2  |
%% 10
		b 4 r8 e'  |
		e' 8 e' e' e'  |
		d' 4 d' 8 ~ d'  |
		c' 4 c' 8 d'  |
		b 4 b  |
%% 15
		c' 4 c' 8 c'  |
		e' 4 c' 8 c'  |
		d' 4. ( e' 8 )  |
		e' 2  |
		e' 8 ( d' ) e' f'  |
%% 20
		d' 4 d' 8 d'  |
		c' 8 c' c' d'  |
		b 2  |
		c' 4 e' 8 d'  |
		c' 4 c' 8 a  |
%% 25
		b 2  |
		b 4 r8 e'  |
		e' 8 e' e' e'  |
		d' 4 d' 8 ~ d'  |
		c' 4 c' 8 d'  |
%% 30
		b 4 b  |
		c' 4 c' 8 c'  |
		e' 4 c' 8 c'  |
		d' 4. ( e' 8 )  |
		e' 2  |
		\bar "|."
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
