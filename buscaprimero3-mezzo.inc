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
		R1  |
		e' 8 ( d' ) e' f' d' 4 d' 8 d'  |
		c' 4 c' 8 d' b 2  |
		c' 4 e' 8 d' c' 4 c' 8 a  |
%% 5
		b 2 b 4 r8 e'  |
		e' 8 d' e' f' d' 4 b 8 ~ b  |
		c' 4 d' 8 c' b 4 b  |
		c' 4 c' 8 c' e' 4 c' 8 c'  |
		d' 4. ( e' 8 ) e' 2  |
%% 10
		R1*2  |
		e' 8 ( d' ) e' f' d' 4 d' 8 d'  |
		c' 8 c' c' d' b 2  |
		c' 4 e' 8 d' c' 4 c' 8 a  |
%% 15
		b 2 b 4 r8 e'  |
		e' 8 d' e' f' d' 4 b 8 ~ b  |
		c' 4 d' 8 c' b 4 b  |
		c' 4 c' 8 c' e' 4 c' 8 c'  |
		d' 4. ( e' 8 ) e' 2  |
%% 20
		R1  |
		\bar "|."
	}
	\lyricsto "mezzo" \new Lyrics \lyricmode {
		"Bus" __ "ca" "pri" -- "me" -- "ro" "el" "rei" -- "no" "de" "Dios"
		"y" "su" "jus" -- "ti" -- "cia" "di" -- "vi" -- "na,"
		"y" "to" -- "do" "se os" "da" -- "rá" "por" "a" -- "ña" -- "di" -- "du" -- "ra,"
		"¡A" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" __ "ya!"
		"¡A" __ "le" -- "lu" -- "ya," "a" -- "le" -- "lu" -- "ya, a" -- "le" -- "lu" -- "ya,"
		"a" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" -- "ya!"
		"Y" "to" -- "do" "se os" "da" -- "rá" "por" "a" -- "ña" -- "di" -- "du" -- "ra,"
		"¡A" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" __ "ya!"
	 }
>>
