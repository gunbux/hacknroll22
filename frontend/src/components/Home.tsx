import React from 'react'
import Button from '@mui/material/Button'
import {useDispatch, useSelector} from 'react-redux'
import {RootState} from "../store/types"
import {onJuicer, offJuicer} from '../store/Juicer/action'

const Home = () => {

  const dispatch = useDispatch()

  const handleOn = () => {
    dispatch(onJuicer())
  }

  const handleOff = () => {
    dispatch(offJuicer())
  }

  return (
    <>
      <Button variant="contained" onClick={handleOn}>On</Button>
      <Button variant="contained" color="secondary" onClick={handleOff}>Off</Button>
    </>
  )
}

export default Home