import {Reducer} from 'redux'
import { ActionTypes, JUICER_ACTIONS } from './types'

const initialState = {}

type State = typeof initialState

// @ts-ignore
export const juicer: Reducer<State, ActionTypes> = (state = initialState, action) => {
  switch (action.type) {
    case JUICER_ACTIONS.ON_JUICER:
      return state

    case JUICER_ACTIONS.OFF_JUICER:
      return state

    default:
      return state
  }
}
