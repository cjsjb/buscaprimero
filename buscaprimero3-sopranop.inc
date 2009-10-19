        \context Staff = "sopranop" << 
            \set Staff.instrumentName = "Soprano+"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "sopranop" {
                \override Voice.TextScript #'padding = #2.0
                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble"
                \clef "treble"
                \key c \major
                R1*2  |
                g' 2 g' 4 a'  |
                b' 2 g' 4 f'  |
%% 5
                e' 2 e' 4 f'  |
                g' 1  |
                a' 2 b' 4 a'  |
                g' 2 a' 4 g'  |
                g' 1  |
%% 10
                b' 2 r4 g'  |
                g' 4 g' g' a'  |
                b' 2 g' 4 g'  |
                e' 2 e' 4 f'  |
                g' 2 g'  |
%% 15
                a' 2 b' 4 a'  |
                g' 2 a' 4 g'  |
                b' 2. c'' 4  |
                c'' 1  |
                R1*3  |
                g' 2 g' 4 a'  |
                b' 2 g' 4 f'  |
                e' 4 e' e' f'  |
%% 25
                g' 1  |
                a' 2 b' 4 a'  |
                g' 2 a' 4 g'  |
                g' 1  |
                b' 2 r4 g'  |
%% 30
                g' 4 g' g' a'  |
                b' 2 g' 4 g'  |
                e' 2 e' 4 f'  |
                g' 2 g'  |
                a' 2 b' 4 a'  |
%% 35
                g' 2 a' 4 g'  |
                b' 2. c'' 4  |
                c'' 1  |
                R1  |
                \bar "|."
            } % Voice
            \lyricsto "sopranop" \new Lyrics \lyricmode {
                 "Bus-" "ca" "pri-" "-me-" "ro" "el" "rei-" "no" "de" "Dios" "y" "su" "jus-" "-ti-" "cia" "di-" "-vi-" "-na," "y" "to-" "do" "se_os" "da-" "-rá" "po-" "or" "a-" "ña-" "di-" "-du-" "ra," "¡A-" "le-" "lu-" "-ya," "a-" "le" "-lu-" "u-" "ya!" "¡A-" "le-" "lu-" "-ya," "a-" "le-" "-lu-" "ya,_a-" "le-" "lu" "-ya," "a-" "le-" "lu-" "-ya," "a-" "le-" "lu-" "ya!" "Y" "to-" "do" "se_os" "da-" "-rá" "po-" "or" "a-" "ña-" "di-" "-du-" "ra," "¡A-" "le-" "lu-" "-ya," "a-" "le" "-lu-" "u-" "ya!" 
             } % Lyrics
        >> % Staff (final)

