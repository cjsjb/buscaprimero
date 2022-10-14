\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key c \major

		R2*2  |
		c' 8 ~ c' c' c'  |
		b 4 b 8 b  |
%% 5
		a 4 a 8 a  |
		g 2  |
		a 4 a 8 a  |
		g 4 g 8 g  |
		g 2  |
%% 10
		g 4 ( a 8 b )  |
		c' 8 c' c' c'  |
		b 4 b 8 ~ b  |
		a 4 a 8 a  |
		g 4 g  |
%% 15
		a 4 b 8 a  |
		g 4 a 8 g  |
		g 4. ( g 8 )  |
		g 2  |
		c' 2  |
%% 20
		b 2  |
		a 2  |
		g 2  |
		a 2  |
		g 2  |
%% 25
		g 2  |
		g 4 ( a 8 b )  |
		c' 2  |
		b 2  |
		a 2  |
%% 30
		g 2  |
		a 2  |
		g 2  |
		g 2  |
		g 2  |
		\bar "|."
	}
	\new Lyrics \lyricsto "tenor" {
		"Bus" __ "ca" "pri" -- "me" -- "ro" "el" "rei" -- "no" "de" "Dios"
		"y" "su" "jus" -- "ti" -- "cia" "di" -- "vi" -- "na," __
		"...to" -- "do" "se os" "da" -- "rá" "por" __ "a" -- "ña" -- "di" -- "du" -- "ra,"
		"¡A" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" __ "ya!"

		"¡A" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" -- "ya!" __
		"¡A" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" -- "ya!"
	 }
>>
